class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      queue<int>q;
       for(int i=0;i<students.size();i++)
      {
        q.push(students[i]);
      }
      int k=0,count=0;
    while(!q.empty() && k<sandwiches.size())
      {
         if(q.front()==sandwiches[k])
         {
            q.pop();
            k++;
            count = 0; 
         }
         else{
            q.push(q.front());
            q.pop();
            count++;
         }
        if(count==q.size())
        {
            break;
        }
      }
      return q.size();
    }
};