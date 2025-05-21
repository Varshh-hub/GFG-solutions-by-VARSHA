// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
struct Item{
    int profit;
    int weight;
};

class Solution {
  public:
    static bool comp(Item &a, Item &b){
        return ((double) a.profit / a.weight) > ((double) b.profit / b.weight);
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int c) {
        // code here
        int n = val.size();
        Item item[n];
        for(int i = 0; i <n; i++){
            item[i].profit = val[i];
            item[i].weight = wt[i];
        }
        sort(item, item +n, comp);
        double mp= 0.0;
        for(int i = 0; i <n ; i++){
            if(item[i].weight <= c){
                c = c - item[i].weight;
                mp= mp+ item[i].profit;
            }
            else{
                mp = mp + c *((double) item[i].profit / item[i].weight);
                break;
            }
            
        }
        return mp;
    }
};
