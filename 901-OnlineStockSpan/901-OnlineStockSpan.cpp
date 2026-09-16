// Last updated: 16/09/2026, 11:41:18
class StockSpanner
{
public:
    stack<pair<int, int>> st;
    int i;

    StockSpanner()
    {
        i = 0;
    }

    int next(int price)
    {
        int NGI;

        if (st.size() == 0)
        {
            NGI = -1;
        }
        else if (st.size() > 0 && st.top().first > price)
        {
            NGI = st.top().second;
        }
        else if (st.size() > 0 && st.top().first <= price)
        {
            while (st.size() > 0 && st.top().first <= price)
            {
                st.pop();
            }

            if (st.size() == 0)
            {
                NGI = -1;
            }
            else
            {
                NGI = st.top().second;
            }
        }

        st.push({price, i});

        int span = i - NGI;

        i++;

        return span;
    }
};