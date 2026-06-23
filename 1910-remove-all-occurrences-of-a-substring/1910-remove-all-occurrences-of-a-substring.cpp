class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){ 
            //string ke lemgth se jbtk chota ho part ka length tab tk rule apply hoga
            
            s.erase(s.find(part),part.length());  // erase(start,end) elements ko remove krte rehege
        }
        return s;
    }
};