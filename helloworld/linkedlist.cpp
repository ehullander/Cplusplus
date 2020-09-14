#include<iostream>

struct Element {
    Element* next{};
    void insert_after(Element* new_element) {
        new_element->next = next;
        next = new_element;
    }
    char prefix[2];
    short operating_number;
};

int main() {
    Element a,b,c;
    //printf("%p\n%p\n%p\n", &a, &b, &c);
    a.insert_after(&b);
    b.insert_after(&c);
    //c.insert_after(&a);

    for (Element *cursor = &a; cursor; cursor = cursor-> next) {
        //cursor is a pointer to the same address of the element
        //deferencing the pointer returns the value at that address of type "Element", which is the pointer to the next element
        printf("%p, %p, %p\n", cursor, *cursor, &cursor);
    }
}
