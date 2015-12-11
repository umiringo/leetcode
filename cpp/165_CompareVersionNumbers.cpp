class Solution {
public:
    int compareVersion(string version1, string version2) {
        std::vector<string> sv1;
        std::vector<string> sv2;
        split(version1, '.',sv1);
        split(version2, '.',sv2);
        int i = 0;
        for(; i < sv1.size(); ++i){
            if(i >= sv2.size()){
                 if(std::stoi(sv1[i]) != 0) return 1;
                 continue;
            }
            int v1 = std::stoi(sv1[i]);
            int v2 = std::stoi(sv2[i]);
            if(v1 > v2) return 1;
            if(v1 < v2) return -1;
        }
        while(i < sv2.size()){
            if(std::stoi(sv2[i]) != 0) return -1;
            i++;
        }
        return 0;

    }
private:
     void split(const std::string &s, char delim, std::vector<string>& stringList){
        std::stringstream ss(s);
        std::string item;
        while(std::getline(ss, item, delim)){
            stringList.push_back(item);
        }
    }
};