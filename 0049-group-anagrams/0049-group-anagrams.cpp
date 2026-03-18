class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // SOLUTION 01 BRUTEFORCE APPROACH


        // vector<vector<string>> result;
        // vector<string> sorted(strs.size());
        // vector<bool> used(strs.size(),false);


        // for(int i=0;i<strs.size();i++){
        //     sorted[i]=strs[i];
        //     sort(sorted[i].begin(),sorted[i].end());
        // }

        // for(int i=0;i<strs.size();i++){
        //     if(used[i]==true)  continue;

        //     vector<string> group;
        //     group.push_back(strs[i]);
        //     used[i]=true;


        //     for(int j=i+1;j<strs.size();j++){
        //         if(used[j]==false && sorted[i]==sorted[j]){
        //             group.push_back(strs[j]);
        //             used[j]=true;
        //         }
        //     }
        //     result.push_back(group);
        // }

        // return result;




        // SOLUTION 02

       vector<vector<string>> result;
       unordered_map<string,int> m;

       for(int i=0;i<strs.size();i++){
        string temp=strs[i];
        sort(temp.begin(),temp.end());

        if(m.find(temp)==m.end()){
            vector<string> newGroup;
            newGroup.push_back(strs[i]);
            result.push_back(newGroup);
            m[temp]=result.size()-1;

        }

        else{
            int index=m[temp];
            result[index].push_back(strs[i]);

        }

       }
        return result;
    }
};


