
How to manipulate bits and use bitwise operators
0.0 converts a binary number to an unsigned int
Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
1.1 prints the binary representation of a number.
Prototype: void print_binary(unsigned long int n);
2.10  returns the value of a bit at a given index.
Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
3.11 sets the value of a bit to 1 at a given index.
Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
4.100 sets the value of a bit to 0 at a given index.
Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
5.101 returns the number of bits you would need to flip to get from one number to another
Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m); 
