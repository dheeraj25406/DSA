class Solution {
public:
    int bitwiseComplement(unsigned n) {
        int w = max(1, bit_width(n));
        return ((1u<<w)-1)^n;
    }
};