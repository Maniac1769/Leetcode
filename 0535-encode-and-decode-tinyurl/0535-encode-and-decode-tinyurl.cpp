class Solution {
public:
    map<string, string> mp;
    int n = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string encoded = "http://tinyurl.com/" + to_string(n);
        n++;
        mp[encoded] = longUrl;
        return encoded;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));