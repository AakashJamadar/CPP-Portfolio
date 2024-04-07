// Given an array 'v' of 'n' numbers.

// Your task is to find and return the highest and lowest frequency elements.

// If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.

//            USING UNORDERED_MAP(no sorting by default)

vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int,int> mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    int maxFreq=INT_MIN;
    int minFreq=INT_MAX;
    int maxFreqEle,minFreqEle;

    for(auto it:mpp){
        if(it.second>maxFreq || it.second==maxFreq && it.first<maxFreqEle){
            maxFreq=it.second;
            maxFreqEle=it.first;
        }
        if(it.second<minFreq || it.second==minFreq && it.first<minFreqEle){
            minFreq=it.second;
            minFreqEle=it.first;
        }
    }
    return{maxFreqEle,minFreqEle};
}

//          USING MAP(default behaviour of sort)

vector<int> getFrequencies(vector<int>& v) {
    map<int,int> mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    int maxFreq=INT_MIN;
    int minFreq=INT_MAX;
    int maxFreqEle,minFreqEle;

    for(auto it:mpp){
        if(it.second>maxFreq){
            maxFreq=it.second;
            maxFreqEle=it.first;
        }
        if(it.second<minFreq){
            minFreq=it.second;
            minFreqEle=it.first;
        }
    }
    return{maxFreqEle,minFreqEle};
}