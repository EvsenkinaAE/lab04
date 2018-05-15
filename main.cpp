#include <iostream>
#include <cassert>

using namespace std;
char nibble_to_hex (uint8_t i)
{
    assert(0x0 <= i && i<=0xf);
    char digits[]="0123456789abcdef";
    return digits[i];
}
void print_in_hex(uint8_t byte)
{
    cout << nibble_to_hex(byte >> 4)<< nibble_to_hex(byte & 0xf);
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
    cout <<bit_digit(byte,0);
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
struct Student
{
    char name [17];
    uint16_t year;
    float sred_ball;
    uint8_t sex:1;
    int classes;
    student *starosta;
}

int main() {
    Student students[3]=
            {
                    {"Fam1",2017,4,1,0,7,nuliptr}
                    {"Fam2",}

            }

    int operant1,operant2,res;
    char operant;
//    assert(nibble_to_hex(0х0) == '0');
//    assert(nibble_to_hex(0х1) == '1');
//    assert(nibble_to_hex(0х2) == '2');
//    assert(nibble_to_hex(0х3) == '3');
//    assert(nibble_to_hex(0х4) == '4');
//    assert(nibble_to_hex(0х5) == '5');
//    assert(nibble_to_hex(0х6) == '6');
//    assert(nibble_to_hex(0х7) == '7');
//    assert(nibble_to_hex(0х8) == '8');
//    assert(nibble_to_hex(0х9) == '9');
//    assert(nibble_to_hex(0хa) == 'a');
//    assert(nibble_to_hex(0хb) == 'b');
//    assert(nibble_to_hex(0хc) == 'c');
//    assert(nibble_to_hex(0хd) == 'd');
//    assert(nibble_to_hex(0хf) == 'f');

    cin>>operant1>>operant>>operant2;
    if(operant == '&')
    {
        res = operant1&operant2;
        print_in_hex(&operant1,sizeof(operant1));
        cout <<operant<<' ';
        print_in_hex(&operant2,sizeof(operant2));
        cout<<"= ";
        print_in_hex(&res,sizeof(res));
        cout<<'\n';
        print_in_binary(&operant1,sizeof(operant1));
        cout <<operant<<' ';
        print_in_binary(&operant2,sizeof(operant2));
        cout<<"= ";
        print_in_binary(&res,sizeof(res));
    }
    if(operant == '|')
    {
        res = operant1&operant2;
        print_in_hex(&operant1,sizeof(operant1));
        cout <<operant<<' ';
        print_in_hex(&operant2,sizeof(operant2));
        cout<<"= ";
        print_in_hex(&res,sizeof(res));
        cout<<'\n';
        print_in_binary(&operant1,sizeof(operant1));
        cout <<operant<<' ';
        print_in_binary(&operant2,sizeof(operant2));
        cout<<"= ";
        print_in_binary(&res,sizeof(res));
    }
    if(operant == '^')
    {
        res = operant1&operant2;
        print_in_hex(&operant1,sizeof(operant1));
        cout <<operant<<' ';
        print_in_hex(&operant2,sizeof(operant2));
        cout<<"= ";
        print_in_hex(&res,sizeof(res));
        cout<<'\n';
        print_in_binary(&operant1,sizeof(operant1));
        cout <<operant<<' ';
        print_in_binary(&operant2,sizeof(operant2));
        cout<<"= ";
        print_in_binary(&res,sizeof(res));
    }

//    uint8_t u8=3;
//    print_in_binary(&u8,sizeof(u8));

    return 0;
}

