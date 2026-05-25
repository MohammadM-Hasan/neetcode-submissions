class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> visited;
        int x = 0 , y = 0;

        string pos = to_string(x) + "," + to_string(y);
        visited.insert(pos);

        for(char c : path)
        {
            if(c == 'N')
                y++;
            else if (c == 'E')
                x++;  
            else if (c == 'S')
                y--; 
            else // W
                x--;   

            pos = to_string(x) + "," + to_string(y); 

            if(visited.count(pos))
                return true;
            

            visited.insert(pos);
        }

        return false;
    }
};