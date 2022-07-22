string predictPartyVictory(string senate) {
    int n = senate.length();
    int Radiant = 0, Dire = 0;
    while (senate.find('R') != -1 && senate.find('D') != -1)
    {
        for (int i=0; i<n; i++)
        {
            if (senate[i] == 'R')
            {
                if (Dire > 0)
                {
                    senate.erase(i, 1);
                    i--;
                    n--;
                    Dire--;
                }
                else
                    Radiant++;
            }
            else
            {
                if (Radiant > 0)
                {
                    senate.erase(i, 1);
                    i--;
                    n--;
                    Radiant--;
                }
                else
                    Dire++;
            }
        }
    }
    if (senate.find('R') != -1)
        return "Radiant";
    else
        return "Dire";
}
