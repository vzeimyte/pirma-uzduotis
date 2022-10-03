class Solution
    {
    public:
        bool isPalindrome(int x)
        {

            std::string number = to_string(x);
            int number_len;
            int i;
            bool skaicius_lygus = true;
            bool y;

            number_len = number.length();

            for (i = 0; i < number_len; i++)
            {
                if (number[i] != number[number_len - i - 1])
                {
                    skaicius_lygus = false;
                    break;
                    
                }
            }
            if (skaicius_lygus)
            {
                y = true;
            }
            else
            {
                y = false;
            }

            return y;
        }
    };