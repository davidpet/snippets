#pragma once // error here because not in a header, but usually supported

#pragma madeup // ignored

// Without packing
struct NoPack {
    char a;        // 1 byte
    int b;         // 4 bytes (typically, depending on the architecture and compiler)
    char c;        // 1 byte
};

// Packing with 1-byte alignment
#pragma pack(push, 1) // preserve old alignment and set current to 1
struct Pack1 {
    char a;        // 1 byte
    int b;         // 4 bytes, but no padding bytes added before it
    char c;        // 1 byte
};
#pragma pack(pop) // restore old alignment

int main() {
    return 0;
}
