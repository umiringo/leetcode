class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int left = std::max(A,E);
        int right = std::max(left, std::min(C,G));
        int bottom = std::max(B,F);
        int top = std::max(bottom, std::min(D,H));
        return (C-A) * (D-B) + (G-E) * (H-F) - (right - left) * (top - bottom);
    }
    
};