class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hangle = ((hour + (minutes/60.0))/12.0)*360.0;
        double mangle = (minutes/60.0)*360.0;

        double diff = abs(hangle - mangle);
        return min(diff, 360.0 - diff);
    }
};