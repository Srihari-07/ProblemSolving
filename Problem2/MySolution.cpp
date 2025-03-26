/*
A teacher rounds up student grades based on the following rules.
If the grade is less than 38, it remains unchanged as it is a failing grade. 
If the next multiple of 5 is within 3 marks of the current grade, the grade is rounded up to that multiple. Otherwise, the grade remains unchanged.
*/
vector<int> gradingStudents(vector<int> grades) {
    // Final Array of Grades after Rounding.
    vector<int> finalArray;
    
    for(int i = 0; i<grades.size(); i++){
        
        // Failing Grade:
        if(grades[i] < 38){
            finalArray.push_back(grades[i]);
        }
        else{
        // Checking the next number of grade which must be multiple of 5. (add 2 to the given Grade and then also checking within range 1)
        
        int roundNum = grades[i]+2;
        // Check the next Multiple of 5 (check 1)
        if(roundNum % 5 != 0){
            roundNum--;
            if(roundNum % 5 != 0){   // (check 2)
                finalArray.push_back(grades[i]);
            }
            else {
            finalArray.push_back(roundNum);
            }
        }
        else {
            finalArray.push_back(roundNum);
        }
    }
}
    return finalArray;
}
