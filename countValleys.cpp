int countingValleys(int steps, string path) {
    int valleys = 0, levels = 0;
    for(char c : path)
    {
        if(c == 'U'){
            levels++;
            if(levels == 0) valleys++;
        }
        else if(c == 'D')
        {
            levels--;
        }

    }
    return valleys;
}