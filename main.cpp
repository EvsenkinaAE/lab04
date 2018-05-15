#include <iostream>
#include <cassert>
using namespace std;
char nibble_to_hex (uint8_t i)
{

    char digits[]="0123456789abcdef";
    return digits[i];
}
void print_in_hex(uint8_t byte)
{
    cout << nibble_to_hex(byte >> 4)
            << nibble_to_hex(byte &0b00001111);
}
const uint8_t*
as_bytes(const void* data) {
    return reinterpret_cast<const uint8_t*>(data);
}
void print_in_hex(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_hex(bytes[i]);
        if ((i + 1) % 16 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
char
bit_digit(uint8_t byte, uint8_t bit) {
    if (byte & (0x1 << bit)) {
        return '1';
    }
    return '0';
}
void
print_in_binary(uint8_t byte) {
    for (uint8_t bit = 7; bit > 0; bit--) {
        cout << bit_digit(byte, bit);
    }
}
void
print_in_binary(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_binary(bytes[i]);
        if ((i + 1) % 4 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
int main() {
    assert(nibble_to_hex(0х0) == '0');
    assert(nibble_to_hex(0х1) == '1');
    assert(nibble_to_hex(0х2) == '2');
    assert(nibble_to_hex(0х3) == '3');
    assert(nibble_to_hex(0х4) == '4');
    assert(nibble_to_hex(0х5) == '5');
    assert(nibble_to_hex(0х6) == '6');
    assert(nibble_to_hex(0х7) == '7');
    assert(nibble_to_hex(0х8) == '8');
    assert(nibble_to_hex(0х9) == '9');
    assert(nibble_to_hex(0хa) == 'a');
    assert(nibble_to_hex(0хb) == 'b');
    assert(nibble_to_hex(0хc) == 'c');
    assert(nibble_to_hex(0хd) == 'd');
    assert(nibble_to_hex(0хf) == 'f');
    return 0;
}
uint8_t u8=3;
print_in_binary(&u8,sizeof(u8));
