struct integrator
{
    integrator() : initialCondition(0) , samplingTime(0), lastValue(0), integralResult(0) {}
    float initialCondition;
    float samplingTime;
    float lastValue;
    float integralResult;

    float integrate(float currentValue)
    {
        integralResult = currentValue + lastValue*samplingTime;
        lastValue = integralResult;
        return integralResult;
    }
    void reset()
    {
        integralResult = 0;
        lastValue = 0;
    }
};