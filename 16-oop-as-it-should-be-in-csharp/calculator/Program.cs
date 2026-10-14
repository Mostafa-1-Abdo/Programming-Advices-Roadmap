using System;

class clCalculator
{
    private float _value;
    private string _last_operation;
    private float _last_operand;
    public void Clear()
    {
        _value = 0;
        _last_operation = "clear";
        _last_operand = 0;
    }
    public void Add(float value)
    {
        _value += value;
        _last_operation = "adding";
        _last_operand = value;
    }
    public void Subtract(float value)
    {
        _value -= value;
        _last_operation = "subtracting";
        _last_operand = value;
    }
    public void Multiply(float value)
    {
        _value *= value;
        _last_operation = "multiplying";
        _last_operand = value;
    }
    public void Divide(float value)
    {
        if (value == 0)
        {
            Console.WriteLine("Cannot divide by zero");
            return;
        }

        _value /= value;
        _last_operation = "dividing";
        _last_operand = value;
    }
    public void PrfloatResult()
    {
        if (_last_operation != "clear")
        Console.WriteLine("Result after {0} {1} = {2}",_last_operation,_last_operand,_value);
        else
            Console.WriteLine("Result after {0} = {2}", _last_operation, _last_operand, _value);
    }
}

internal class Program
{
    static void Main(string[] args)
    {
        clCalculator Calculator = new clCalculator();

        Calculator.Clear();

        Calculator.Add(10);
        Calculator.PrfloatResult();

        Calculator.Add(100);
        Calculator.PrfloatResult();

        Calculator.Subtract(20);
        Calculator.PrfloatResult();

        Calculator.Divide(-7);
        Calculator.PrfloatResult();

        Calculator.Clear();
        Calculator.Subtract(20);
        Calculator.PrfloatResult();
    }
}

