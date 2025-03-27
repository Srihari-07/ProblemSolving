// You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.
// i was actually not able to solve the problem.
string kangaroo(int x1, int v1, int x2, int v2) {
    
    // If kangaroo 1 is behind and has a higher speed
    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0) {
        return "YES";
    }
    return "NO";
    
}
