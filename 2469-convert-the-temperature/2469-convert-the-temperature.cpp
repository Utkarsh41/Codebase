class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        double fr = (9*celsius)/5 +32,kel = 273.15+celsius;
        return {kel,fr};
        
    }
};

// c/5 = f-32 /9
//     f= 9*c/5 + 32