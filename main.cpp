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
    int year;
    float sred_ball;
    uint8_t sex:1;
    int classes;
    Student *starosta;
};

int main() {
    Student students[3]=
            {
                    {"Artem",2017,4.1,1,1, nullptr},
                    {"Sasha",2017,4,0,1,&students[0]},
                    {"Masha",2017,4,0,1,&students[0]}

            };
    cout<<"Adress of array:"<<&students<<'\n';
    cout<<"size of array:"<<sizeof(students)<<'\n';
    cout<<"\t Adress of element:"<<"\t size of element:\n";
    for(int i=0;i<3;i++){
        cout<<i<<"\t"<<&students[i]<<"\t\t"<<sizeof(&students[i]);
        cout<<'\n';

    }

    cout<< "For First elem of array:\n";
    cout<<"\t Address of field:"<<"\t sizeof field:"<<"\t offset:\n";
    cout<< "NAME:\t"<<&students[0].name<<"\t\t\t";
    cout<<sizeof(students[0])<<"\t"<<offsetof(struct Student,name);
    cout<<"n";
    cout<< "YEAR:\t"<<&students[0].year<<"\t\t\t";
    cout<<sizeof(students[0])<<"\t"<<offsetof(struct Student,name);
    cout<<"n";
    cout<< "SRED_BALL:\t"<<&students[0].sred_ball<<"\t\t\t";
    cout<<sizeof(students[0])<<"\t"<<offsetof(struct Student,name);
    cout<<"n";
    cout<< "CLASSES:\t"<<&students[0].classes<<"\t\t\t";
    cout<<sizeof(students[0])<<"\t"<<offsetof(struct Student,name);
    cout<<"n";
    cout<<"NAME:\n";
    cout<<"Binary:\n";
    print_in_binary(&students[0].name,sizeof(students[0].name));
    cout<<"n Hex: ";
    print_in_hex(&students[0].name,sizeof(students[0].name));
    cout<<"n";
    cout<<"YEAR:\n";
    cout<<"Binary:\n";
    print_in_binary(&students[0].year,sizeof(students[0].year));
    cout<<"n Hex: ";
    print_in_hex(&students[0].year,sizeof(students[0].year));
    cout<<"\n";






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

  /*  cin>>operant1>>operant>>operant2;
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
    }*/

//    uint8_t u8=3;
//    print_in_binary(&u8,sizeof(u8));

    return 0;
}

