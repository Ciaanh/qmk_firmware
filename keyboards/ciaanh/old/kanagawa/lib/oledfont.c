#include "progmem.h"



const unsigned char font[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x00 000 =>
    0x3E, 0x5B, 0x4F, 0x5B, 0x3E, 0x00,              // 0x01 001 => sad
    0x3E, 0x6B, 0x4F, 0x6B, 0x3E, 0x00,              // 0x02 002 => smile
    0x1C, 0x3E, 0x7C, 0x3E, 0x1C, 0x00,              // 0x03 003 => heart
    0x18, 0x3C, 0x7E, 0x3C, 0x18, 0x00,              // 0x04 004 => diamond
    0x1C, 0x57, 0x7D, 0x57, 0x1C, 0x00,              // 0x05 005 => clover
    0x1C, 0x5E, 0x7F, 0x5E, 0x1C, 0x00,              // 0x06 006 => spade
    0x00, 0x18, 0x3C, 0x18, 0x00, 0x00,              // 0x07 007 =>
    0xFF, 0xE7, 0xC3, 0xE7, 0xFF, 0x00,              // 0x08 008 =>
    0x00, 0x18, 0x24, 0x18, 0x00, 0x00,              // 0x09 009 =>
    0xFF, 0xE7, 0xDB, 0xE7, 0xFF, 0x00,              // 0x0A 010 =>
    0x30, 0x48, 0x3A, 0x06, 0x0E, 0x00,              // 0x0B 011 => male symbol
    0x26, 0x29, 0x79, 0x29, 0x26, 0x00,              // 0x0C 012 => female symbol
    0x40, 0x7F, 0x05, 0x05, 0x07, 0x00,              // 0x0D 013 =>
    0x40, 0x7F, 0x05, 0x25, 0x3F, 0x00,              // 0x0E 014 =>
    0x5A, 0x3C, 0xE7, 0x3C, 0x5A, 0x00,              // 0x0F 015 =>

    0x7F, 0x3E, 0x1C, 0x1C, 0x08, 0x00,              // 0x10 016 => right
    0x08, 0x1C, 0x1C, 0x3E, 0x7F, 0x00,              // 0x11 017 => left
    0x14, 0x22, 0x7F, 0x22, 0x14, 0x00,              // 0x12 018 =>
    0x5F, 0x5F, 0x00, 0x5F, 0x5F, 0x00,              // 0x13 019 => !!
    0x06, 0x09, 0x7F, 0x01, 0x7F, 0x00,              // 0x14 020 =>
    0x00, 0x66, 0x89, 0x95, 0x6A, 0x00,              // 0x15 021 =>
    0x60, 0x60, 0x60, 0x60, 0x60, 0x00,              // 0x16 022 =>
    0x94, 0xA2, 0xFF, 0xA2, 0x94, 0x00,              // 0x17 023 =>
    0x08, 0x04, 0x7E, 0x04, 0x08, 0x00,              // 0x18 024 =>
    0x10, 0x20, 0x7E, 0x20, 0x10, 0x00,              // 0x19 025 =>
    0x08, 0x08, 0x2A, 0x1C, 0x08, 0x00,              // 0x1A 026 =>
    0x08, 0x1C, 0x2A, 0x08, 0x08, 0x00,              // 0x1B 027 =>
    0x1E, 0x10, 0x10, 0x10, 0x10, 0x00,              // 0x1C 028 =>
    0x0C, 0x1E, 0x0C, 0x1E, 0x0C, 0x00,              // 0x1D 029 =>
    0x30, 0x38, 0x3E, 0x38, 0x30, 0x00,              // 0x1E 030 =>
    0x06, 0x0E, 0x3E, 0x0E, 0x06, 0x00,              // 0x1F 031 =>

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x20 032 => sp
    0x00, 0x00, 0x5F, 0x00, 0x00, 0x00,              // 0x21 033 => !
    0x00, 0x07, 0x00, 0x07, 0x00, 0x00,              // 0x22 034 => "
    0x14, 0x7F, 0x14, 0x7F, 0x14, 0x00,              // 0x23 035 => #
    0x24, 0x2A, 0x7F, 0x2A, 0x12, 0x00,              // 0x24 036 => $
    0x23, 0x13, 0x08, 0x64, 0x62, 0x00,              // 0x25 037 => %
    0x36, 0x49, 0x56, 0x20, 0x50, 0x00,              // 0x26 038 => &
    0x00, 0x08, 0x07, 0x03, 0x00, 0x00,              // 0x27 039 => '
    0x00, 0x1C, 0x22, 0x41, 0x00, 0x00,              // 0x28 040 => (
    0x00, 0x41, 0x22, 0x1C, 0x00, 0x00,              // 0x29 041 => )
    0x2A, 0x1C, 0x7F, 0x1C, 0x2A, 0x00,              // 0x2A 042 => *
    0x08, 0x08, 0x3E, 0x08, 0x08, 0x00,              // 0x2B 043 => +
    0x00, 0x80, 0x70, 0x30, 0x00, 0x00,              // 0x2C 044 => ,
    0x08, 0x08, 0x08, 0x08, 0x08, 0x00,              // 0x2D 045 => -
    0x00, 0x00, 0x60, 0x60, 0x00, 0x00,              // 0x2E 046 => .
    0x20, 0x10, 0x08, 0x04, 0x02, 0x00,              // 0x2F 047 => /

    0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00,              // 0x30 048 => 0
    0x00, 0x42, 0x7F, 0x40, 0x00, 0x00,              // 0x31 049 => 1
    0x72, 0x49, 0x49, 0x49, 0x46, 0x00,              // 0x32 050 => 2
    0x21, 0x41, 0x49, 0x4D, 0x33, 0x00,              // 0x33 051 => 3
    0x18, 0x14, 0x12, 0x7F, 0x10, 0x00,              // 0x34 052 => 4
    0x27, 0x45, 0x45, 0x45, 0x39, 0x00,              // 0x35 053 => 5
    0x3C, 0x4A, 0x49, 0x49, 0x31, 0x00,              // 0x36 054 => 6
    0x41, 0x21, 0x11, 0x09, 0x07, 0x00,              // 0x37 055 => 7
    0x36, 0x49, 0x49, 0x49, 0x36, 0x00,              // 0x38 056 => 8
    0x46, 0x49, 0x49, 0x29, 0x1E, 0x00,              // 0x39 057 => 9
    0x00, 0x00, 0x14, 0x00, 0x00, 0x00,              // 0x3A 058 => :
    0x00, 0x40, 0x34, 0x00, 0x00, 0x00,              // 0x3B 059 => ;
    0x00, 0x08, 0x14, 0x22, 0x41, 0x00,              // 0x3C 060 => <
    0x14, 0x14, 0x14, 0x14, 0x14, 0x00,              // 0x3D 061 => =
    0x00, 0x41, 0x22, 0x14, 0x08, 0x00,              // 0x3E 062 => >
    0x02, 0x01, 0x59, 0x09, 0x06, 0x00,              // 0x3F 063 => ?

    0x3E, 0x41, 0x5D, 0x59, 0x4E, 0x00,              // 0x40 064 => @
    0x7C, 0x12, 0x11, 0x12, 0x7C, 0x00,              // 0x41 065 => A
    0x7F, 0x49, 0x49, 0x49, 0x36, 0x00,              // 0x42 066 => B
    0x3E, 0x41, 0x41, 0x41, 0x22, 0x00,              // 0x43 067 => C
    0x7F, 0x41, 0x41, 0x41, 0x3E, 0x00,              // 0x44 068 => D
    0x7F, 0x49, 0x49, 0x49, 0x41, 0x00,              // 0x45 069 => E
    0x7F, 0x09, 0x09, 0x09, 0x01, 0x00,              // 0x46 070 => F
    0x3E, 0x41, 0x41, 0x51, 0x73, 0x00,              // 0x47 071 => G
    0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00,              // 0x48 072 => H
    0x00, 0x41, 0x7F, 0x41, 0x00, 0x00,              // 0x49 073 => I
    0x20, 0x40, 0x41, 0x3F, 0x01, 0x00,              // 0x4A 074 => J
    0x7F, 0x08, 0x14, 0x22, 0x41, 0x00,              // 0x4B 075 => K
    0x7F, 0x40, 0x40, 0x40, 0x40, 0x00,              // 0x4C 076 => L
    0x7F, 0x02, 0x1C, 0x02, 0x7F, 0x00,              // 0x4D 077 => M
    0x7F, 0x04, 0x08, 0x10, 0x7F, 0x00,              // 0x4E 078 => N
    0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00,              // 0x4F 079 => O

    0x7F, 0x09, 0x09, 0x09, 0x06, 0x00,              // 0x50 080 => P
    0x3E, 0x41, 0x51, 0x21, 0x5E, 0x00,              // 0x51 081 => Q
    0x7F, 0x09, 0x19, 0x29, 0x46, 0x00,              // 0x52 082 => R
    0x26, 0x49, 0x49, 0x49, 0x32, 0x00,              // 0x53 083 => S
    0x03, 0x01, 0x7F, 0x01, 0x03, 0x00,              // 0x54 084 => T
    0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00,              // 0x55 085 => U
    0x1F, 0x20, 0x40, 0x20, 0x1F, 0x00,              // 0x56 086 => V
    0x3F, 0x40, 0x38, 0x40, 0x3F, 0x00,              // 0x57 087 => W
    0x63, 0x14, 0x08, 0x14, 0x63, 0x00,              // 0x58 088 => X
    0x03, 0x04, 0x78, 0x04, 0x03, 0x00,              // 0x59 089 => Y
    0x61, 0x59, 0x49, 0x4D, 0x43, 0x00,              // 0x5A 090 => Z
    0x00, 0x7F, 0x41, 0x41, 0x41, 0x00,              // 0x5B 091 => [
    0x02, 0x04, 0x08, 0x10, 0x20, 0x00,              // 0x5C 092 => '\'
    0x00, 0x41, 0x41, 0x41, 0x7F, 0x00,              // 0x5D 093 => ]
    0x04, 0x02, 0x01, 0x02, 0x04, 0x00,              // 0x5E 094 => ^
    0x40, 0x40, 0x40, 0x40, 0x40, 0x00,              // 0x5F 095 => _

    0x00, 0x03, 0x07, 0x08, 0x00, 0x00,              // 0x60 096 => `
    0x20, 0x54, 0x54, 0x78, 0x40, 0x00,              // 0x61 097 => a
    0x7F, 0x28, 0x44, 0x44, 0x38, 0x00,              // 0x62 098 => b
    0x38, 0x44, 0x44, 0x44, 0x28, 0x00,              // 0x63 099 => c
    0x38, 0x44, 0x44, 0x28, 0x7F, 0x00,              // 0x64 100 => d
    0x38, 0x54, 0x54, 0x54, 0x18, 0x00,              // 0x65 101 => e
    0x00, 0x08, 0x7E, 0x09, 0x02, 0x00,              // 0x66 102 => f
    0x18, 0x24, 0x24, 0x1C, 0x78, 0x00,              // 0x67 103 => g
    0x7F, 0x08, 0x04, 0x04, 0x78, 0x00,              // 0x68 104 => h
    0x00, 0x44, 0x7D, 0x40, 0x00, 0x00,              // 0x69 105 => i
    0x20, 0x40, 0x40, 0x3D, 0x00, 0x00,              // 0x6A 106 => j
    0x7F, 0x10, 0x28, 0x44, 0x00, 0x00,              // 0x6B 107 => k
    0x00, 0x41, 0x7F, 0x40, 0x00, 0x00,              // 0x6C 108 => l
    0x7C, 0x04, 0x78, 0x04, 0x78, 0x00,              // 0x6D 109 => m
    0x7C, 0x08, 0x04, 0x04, 0x78, 0x00,              // 0x6E 110 => n
    0x38, 0x44, 0x44, 0x44, 0x38, 0x00,              // 0x6F 111 => o

    0x7C, 0x18, 0x24, 0x24, 0x18, 0x00,              // 0x70 112 => p
    0x18, 0x24, 0x24, 0x18, 0x7C, 0x00,              // 0x71 113 => q
    0x7C, 0x08, 0x04, 0x04, 0x08, 0x00,              // 0x72 114 => r
    0x48, 0x54, 0x54, 0x54, 0x24, 0x00,              // 0x73 115 => s
    0x04, 0x04, 0x3F, 0x44, 0x24, 0x00,              // 0x74 116 => t
    0x3C, 0x40, 0x40, 0x20, 0x7C, 0x00,              // 0x75 117 => u
    0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00,              // 0x76 118 => v
    0x3C, 0x40, 0x30, 0x40, 0x3C, 0x00,              // 0x77 119 => w
    0x44, 0x28, 0x10, 0x28, 0x44, 0x00,              // 0x78 120 => x
    0x4C, 0x90, 0x90, 0x90, 0x7C, 0x00,              // 0x79 121 => y
    0x44, 0x64, 0x54, 0x4C, 0x44, 0x00,              // 0x7A 122 => z
    0x00, 0x08, 0x36, 0x41, 0x00, 0x00,              // 0x7B 123 => {
    0x00, 0x00, 0x77, 0x00, 0x00, 0x00,              // 0x7C 124 => |
    0x00, 0x41, 0x36, 0x08, 0x00, 0x00,              // 0x7D 125 => }
    0x02, 0x01, 0x02, 0x04, 0x02, 0x00,              // 0x7E 126 => ~
    0x3C, 0x26, 0x23, 0x26, 0x3C, 0x00,              // 0x7F 127 =>

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x80 128 =>               ============================= LOGOS ===============================
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x81 129 =>
    0x80, 0xC0, 0xC0, 0xC0, 0xE0, 0xF0,              // 0x82 130 =>
    0xF0, 0xF0, 0xF8, 0xF8, 0xFF, 0xFF,              // 0x83 131 =>
    0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC,              // 0x84 132 =>
    0xF8, 0xF8, 0xE0, 0x00, 0x00, 0x00,              // 0x85 133 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x86 134 =>
    0xE0, 0xF0, 0xF8, 0xF8, 0xF0, 0xE0,              // 0x87 135 =>
    0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00,              // 0x88 136 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x89 137 =>
    0x00, 0x80, 0xE0, 0xF0, 0xE0, 0xE0,              // 0x8A 138 =>
    0xE0, 0x00, 0x00, 0x00, 0xC0, 0xC0,              // 0x8B 139 =>
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00,              // 0x8C 140 =>
    0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0,              // 0x8D 141 =>
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00,              // 0x8E 142 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80,              // 0x8F 143 =>

    0xC0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0,              // 0x90 144 =>
    0x40, 0x00, 0x00, 0x00, 0x80, 0x80,              // 0x91 145 =>
    0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0,              // 0x92 146 =>
    0xE0, 0xF0, 0xF0, 0xF0, 0xE0, 0x00,              // 0x93 147 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x94 148 =>
    0xE0, 0xF0, 0xF0, 0xF0, 0xE0, 0xEC,              // 0x95 149 =>
    0xEE, 0xF7, 0xF3, 0x70, 0x20, 0x00,              // 0x96 150 =>
    0x7C, 0x7C, 0x7C, 0x7E, 0x00, 0x7E,              // 0x97 151 =>
    0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x00,              // 0x98 152 =>
    0x00, 0x80, 0xC0, 0xE0, 0x7E, 0x5B,              // 0x99 153 =>
    0x4F, 0x5B, 0xFE, 0xC0, 0x00, 0x00,              // 0x9A 154 =>
    0xC0, 0x00, 0xDC, 0xD7, 0xDE, 0xDE,              // 0x9B 155 =>
    0xDE, 0xD7, 0xDC, 0x00, 0xC0, 0x00,              // 0x9C 156 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x9D 157 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x9E 158 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0x9F 159 =>

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xA0 160 =>
    0x00, 0x0C, 0x0E, 0x8E, 0xCE, 0xFF,              // 0xA1 161 =>
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,              // 0xA2 162 =>
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,              // 0xA3 163 =>
    0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,              // 0xA4 164 =>
    0x7F, 0x1F, 0x0F, 0x00, 0x00, 0x00,              // 0xA5 165 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xA6 166 =>
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,              // 0xA7 167 =>
    0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7E,              // 0xA8 168 =>
    0x3E, 0x3C, 0xDC, 0xE8, 0xF8, 0xFC,              // 0xA9 169 =>
    0xFE, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF,              // 0xAA 170 =>
    0xFE, 0xFC, 0xF0, 0xE0, 0xFF, 0xFF,              // 0xAB 171 =>
    0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00,              // 0xAC 172 =>
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,              // 0xAD 173 =>
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,              // 0xAE 174 =>
    0x80, 0xE0, 0xF0, 0xF8, 0xFE, 0xFF,              // 0xAF 175 =>

    0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF,              // 0xB0 176 =>
    0xFC, 0xF0, 0xE0, 0x83, 0x0F, 0x0F,              // 0xB1 177 =>
    0x1F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF,              // 0xB2 178 =>
    0xF9, 0xF1, 0xF1, 0xE1, 0xC1, 0xC0,              // 0xB3 179 =>
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xB4 180 =>
    0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F,              // 0xB5 181 =>
    0x7F, 0x7F, 0x3F, 0x1E, 0x0C, 0x00,              // 0xB6 182 =>
    0x1F, 0x1F, 0x1F, 0x3F, 0x00, 0x3F,              // 0xB7 183 =>
    0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x00,              // 0xB8 184 =>
    0x30, 0x7B, 0x7F, 0x78, 0x30, 0x20,              // 0xB9 185 =>
    0x20, 0x30, 0x78, 0x7F, 0x3B, 0x00,              // 0xBA 186 =>
    0x03, 0x00, 0x0F, 0x7F, 0x0F, 0x0F,              // 0xBB 187 =>
    0x0F, 0x7F, 0x0F, 0x00, 0x03, 0x00,              // 0xBC 188 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xBD 189 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xBE 190 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xBF 191 =>

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xC0 192 =>
    0x00, 0x00, 0x00, 0x01, 0x03, 0x0F,              // 0xC1 193 =>
    0x0F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF,              // 0xC2 194 =>
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,              // 0xC3 195 =>
    0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x1C,              // 0xC4 196 =>
    0x10, 0x10, 0x00, 0x00, 0x00, 0x00,              // 0xC5 197 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xC6 198 =>
    0x03, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,              // 0xC7 199 =>
    0x1F, 0x03, 0x01, 0x00, 0x00, 0x00,              // 0xC8 200 =>
    0x00, 0x00, 0x01, 0x1F, 0x1F, 0x1F,              // 0xC9 201 =>
    0x1F, 0x1F, 0x1E, 0x1E, 0x0E, 0x0F,              // 0xCA 202 =>
    0x0F, 0x1F, 0x1F, 0x01, 0x0F, 0x0F,              // 0xCB 203 =>
    0x0F, 0x1F, 0x1F, 0x1F, 0x0F, 0x1F,              // 0xCC 204 =>
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x1F,              // 0xCD 205 =>
    0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0x0F,              // 0xCE 206 =>
    0x0F, 0x01, 0x1F, 0x1F, 0x1F, 0x1F,              // 0xCF 207 =>

    0x1E, 0x1E, 0x1E, 0x0E, 0x0F, 0x0F,              // 0xD0 208 =>
    0x1F, 0x1F, 0x0F, 0x01, 0x00, 0x0E,              // 0xD1 209 =>
    0x1E, 0x1E, 0x1E, 0x1F, 0x1F, 0x1F,              // 0xD2 210 =>
    0x0F, 0x0F, 0x07, 0x07, 0x07, 0x03,              // 0xD3 211 =>
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xD4 212 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xD5 213 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xD6 214 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xD7 215 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xD8 216 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xD9 217 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xDA 218 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xDB 219 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xDC 220 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xDD 221 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xDE 222 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xDF 223 =>

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE0 224 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE1 225 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE2 226 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE3 227 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE4 228 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE5 229 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE6 230 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE7 231 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE8 232 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xE9 233 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xEA 234 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xEB 235 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xEC 236 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xED 237 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xEE 238 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xEF 239 =>

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF0 240 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF1 241 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF2 242 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF3 243 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF4 244 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF5 245 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF6 246 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF7 247 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF8 248 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xF9 249 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xFA 250 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xFB 251 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xFC 252 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xFD 253 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,              // 0xFE 254 =>
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00               // 0xFF 255 =>
};
