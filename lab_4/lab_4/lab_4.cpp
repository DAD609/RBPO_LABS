#include <iostream>
#include <initializer_list>

template<typename T>
struct Node {
    T data;
    Node* next;
    Node* prev;
};

template <typename T>
class StackBasedOnBidirectionalCyclicLinkedList {
private:
    Node<T>* top;
    int size;

public:
    StackBasedOnBidirectionalCyclicLinkedList();
    StackBasedOnBidirectionalCyclicLinkedList(const StackBasedOnBidirectionalCyclicLinkedList& other);
    StackBasedOnBidirectionalCyclicLinkedList(StackBasedOnBidirectionalCyclicLinkedList&& other) noexcept;
    StackBasedOnBidirectionalCyclicLinkedList(std::initializer_list<T> list);
    ~StackBasedOnBidirectionalCyclicLinkedList();

    StackBasedOnBidirectionalCyclicLinkedList& operator=(const StackBasedOnBidirectionalCyclicLinkedList& other);
    StackBasedOnBidirectionalCyclicLinkedList& operator=(StackBasedOnBidirectionalCyclicLinkedList&& other) noexcept;

    void Push(const T& value);
    bool Pop(T& value);
    bool Peek(T& value) const;
    int GetSize() const;
    bool IsEmpty() const;
    void Clear();
};

// Определения методов шаблона класса
template <typename T>
StackBasedOnBidirectionalCyclicLinkedList<T>::StackBasedOnBidirectionalCyclicLinkedList()
    : top(nullptr), size(0) {}

template <typename T>
StackBasedOnBidirectionalCyclicLinkedList<T>::StackBasedOnBidirectionalCyclicLinkedList(const StackBasedOnBidirectionalCyclicLinkedList& other) {
    // Реализация конструктора копирования
}

template <typename T>
StackBasedOnBidirectionalCyclicLinkedList<T>::StackBasedOnBidirectionalCyclicLinkedList(StackBasedOnBidirectionalCyclicLinkedList&& other) noexcept
    : top(other.top), size(other.size) {
    other.top = nullptr;
    other.size = 0;
}

template <typename T>
StackBasedOnBidirectionalCyclicLinkedList<T>::StackBasedOnBidirectionalCyclicLinkedList(std::initializer_list<T> list)
    : top(nullptr), size(0) {
    for (const auto& item : list) {
        Push(item);
    }
}

template <typename T>
StackBasedOnBidirectionalCyclicLinkedList<T>::~StackBasedOnBidirectionalCyclicLinkedList() {
    Clear();
}

template <typename T>
StackBasedOnBidirectionalCyclicLinkedList<T>& StackBasedOnBidirectionalCyclicLinkedList<T>::operator=(const StackBasedOnBidirectionalCyclicLinkedList& other) {
    if (this != &other) {
        Clear();
        Node<T>* current = other.top;
        if (current != nullptr) {
            do {
                Push(current->data);
                current = current->prev; // Копируем начиная с вершины стека и двигаясь вниз
            } while (current != other.top);
        }
    }
    return *this;
}

template <typename T>
StackBasedOnBidirectionalCyclicLinkedList<T>& StackBasedOnBidirectionalCyclicLinkedList<T>::operator=(StackBasedOnBidirectionalCyclicLinkedList&& other) noexcept {
    if (this != &other) {
        Clear();
        top = other.top;
        size = other.size;
        other.top = nullptr;
        other.size = 0;
    }
    return *this;
}

template <typename T>
void StackBasedOnBidirectionalCyclicLinkedList<T>::Push(const T& value) {
    Node<T>* newNode = new Node<T>{ value, nullptr, nullptr };
    if (top == nullptr) {
        newNode->next = newNode;
        newNode->prev = newNode;
        top = newNode;
    }
    else {
        newNode->prev = top;
        newNode->next = top->next;
        top->next->prev = newNode;
        top->next = newNode;
        top = newNode;
    }
    size++;
}

template <typename T>
bool StackBasedOnBidirectionalCyclicLinkedList<T>::Pop(T& element) {
    if (top == nullptr) {
        return false; // Если стек пуст, возвращаем false
    }
    element = top->data;
    Node<T>* toDelete = top;
    if (size > 1) {
        top->prev->next = top->next;
        top->next->prev = top->prev;
        top = top->prev;
    }
    else {
        top = nullptr;
    }
    delete toDelete;
    size--;
    return true; // Возвращаем true, если элемент был успешно удален
}

template <typename T>
bool StackBasedOnBidirectionalCyclicLinkedList<T>::Peek(T& element) const {
    if (top == nullptr) {
        return false; // Если стек пуст, возвращаем false
    }
    element = top->data;
    return true; // Возвращаем true, если элемент был успешно прочитан
}

template <typename T>
int StackBasedOnBidirectionalCyclicLinkedList<T>::GetSize() const {
    return size;
}

template <typename T>
bool StackBasedOnBidirectionalCyclicLinkedList<T>::IsEmpty() const {
    return size == 0;
}

template <typename T>
void StackBasedOnBidirectionalCyclicLinkedList<T>::Clear() {
    while (!IsEmpty()) {
        T value;
        Pop(value); // Предполагаем, что Pop изменяет стек и удаляет элемент
    }
}
int main() {
    // Создание стеков с использованием различных конструкторов
    StackBasedOnBidirectionalCyclicLinkedList<int> defaultStack; // Конструктор по умолчанию
    StackBasedOnBidirectionalCyclicLinkedList<int> initListStack = { 1, 2, 3, 4, 5 }; // Конструктор с инициализацией списком

    // Копирование и перемещение
    StackBasedOnBidirectionalCyclicLinkedList<int> copiedStack(initListStack); // Конструктор копирования
    StackBasedOnBidirectionalCyclicLinkedList<int> movedStack(std::move(copiedStack)); // Конструктор перемещения

    // Тестирование операций Push, Pop, Peek
    defaultStack.Push(10);
    defaultStack.Push(20);

    int peekedElement;
    if (defaultStack.Peek(peekedElement)) {
        std::cout << "Peeked from defaultStack: " << peekedElement << std::endl;
    }

    int poppedElement;
    while (defaultStack.Pop(poppedElement)) {
        std::cout << "Popped from defaultStack: " << poppedElement << std::endl;
    }

    // Вывод размера стека
    std::cout << "Size of initListStack: " << initListStack.GetSize() << std::endl;

    // Присваивание
    defaultStack = initListStack; // Оператор присваивания копированием
    std::cout << "Size of defaultStack after assignment: " << defaultStack.GetSize() << std::endl;

    // Очистка initListStack и проверка размера после очистки
    initListStack.Clear();
    std::cout << "Size of initListStack after clear: " << initListStack.GetSize() << std::endl;

    // Очистка defaultStack и проверка размера после очистки
    defaultStack.Clear();
    std::cout << "Size of defaultStack after clear: " << defaultStack.GetSize() << std::endl;

    return 0;
}
