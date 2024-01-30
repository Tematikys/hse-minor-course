// Авторское решение, не будет присутствовать в итоговой версии

#include <memory>
#include <stdexcept>

template<typename T, typename Alloc = std::allocator<T>>
class Stack {
private:
    T *m_data;
    std::size_t m_size;
    std::size_t m_capacity;

    void reallocate() {
        T *new_data = Alloc().allocate(m_capacity * 2);
        if(new_data == nullptr) {
            throw std::bad_alloc();
        }
        for(std::size_t i = 0; i < m_size; ++i) {
            new_data[i] = std::move(m_data[i]);
        }
        Alloc().deallocate(m_data, m_capacity);
        m_data = new_data;
        m_capacity = m_capacity * 2;
    }

public:
    Stack() {
        m_data = Alloc().allocate(1);
        m_size = 0;
        m_capacity = 1;
    }

    T &top() {
        if(empty()) {
            throw std::out_of_range("Stack is empty");
        }
        return m_data[m_size - 1];
    }

    const T &top() const {
        if(empty()) {
            throw std::out_of_range("Stack is empty");
        }
        return m_data[m_size - 1];
    }

    bool empty() const noexcept {
        return m_size == 0;
    }

    std::size_t size() const noexcept {
        return m_size;
    }

    void push(const T& val) {
        if(m_size == m_capacity) {
            reallocate();
        }
        m_data[m_size++] = val;
    }

    void push(T &&val) {
        if(m_size == m_capacity) {
            reallocate();
        }
        m_data[m_size++] = std::move(val);
    }

    void pop() {
        if(m_size == 0) {
            throw std::out_of_range("Stack is empty");
        }
        --m_size;
    }

    ~Stack() {
        Alloc().deallocate(m_data, m_capacity);
    }
};
