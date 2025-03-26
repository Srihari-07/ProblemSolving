vector<int> gradingStudents(vector<int> grades) {
    vector<int> finalArray;

    for (int grade : grades) {
        if (grade < 38) {
            finalArray.push_back(grade); // Failing grade, no rounding
        } else {
            int nextMultiple = ((grade / 5) + 1) * 5; // Find next multiple of 5
            if (nextMultiple - grade < 3) {
                finalArray.push_back(nextMultiple); // Round up
            } else {
                finalArray.push_back(grade); // Keep original
            }
        }
    }

    return finalArray;
}
