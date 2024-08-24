public class Solution {
    public bool IsPalindrome(int x) {
        string val = x.ToString();

        char[] charArray = val.ToCharArray();
        Array.Reverse(charArray);
        string rval = new string (charArray);

        if (val == rval) {
            return true;
        } else {
            return false;
        }
    }
}
