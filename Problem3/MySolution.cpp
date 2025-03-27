// Given the value of  d for m apples and n oranges, determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range [s,t])?
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    // Array's To store the final Distances of Fruits.
    // Apple's final Distance's
    vector<int> appleDistances;
    // Orange's final Distance's
    vector<int> orangeDistances;
    
    // The range within which we need to check all the final Distances.
    int houseStartingPoint = s; int houseEndingPoint = t;
    
    // Both The Tree's Location
    int appleTreeLocation = a; int orangeTreeLocation = b;
    
    // Final Counts of Apples and Oranges
    int appleCount = 0; int orangeCount = 0;
    
    // individual Apple's final Distance:
    for(int i = 0; i < apples.size(); i++){
        // Adding Tree's Location with the apples distance.
        appleDistances.push_back(appleTreeLocation + apples[i]);
        // Checking the final distance within the range of s and t
        if(houseStartingPoint <= appleDistances[i] && appleDistances[i]<= houseEndingPoint){
            appleCount++;
        }
    }
    
    // individual Orange's final Distance:
    for(int i = 0; i < oranges.size(); i++){
        // Adding Tree's Location with the oranges distance.
        orangeDistances.push_back(orangeTreeLocation + oranges[i]);
        // Checking the final distance within the range of s and t
        if(houseStartingPoint <= orangeDistances[i] && orangeDistances[i]<= houseEndingPoint){
            orangeCount++;
        }
    }

    cout << appleCount << endl;
    cout << orangeCount<< endl;
}
