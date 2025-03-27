
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleCount = 0, orangeCount = 0;

    // Count apples that fall in the range
    for (int apple : apples) {
        int landingPosition = a + apple;
        if (landingPosition >= s && landingPosition <= t) {
            appleCount++;
        }
    }

    // Count oranges that fall in the range
    for (int orange : oranges) {
        int landingPosition = b + orange;
        if (landingPosition >= s && landingPosition <= t) {
            orangeCount++;
        }
    }

    cout << appleCount << endl;
    cout << orangeCount << endl;
}
