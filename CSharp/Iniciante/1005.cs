using System; 

class URI {

    static void Main(string[] args) { 

    double A, B, MEDIA=0;
    A = double.Parse(Console.ReadLine());
    B = double.Parse(Console.ReadLine());
    MEDIA = ((A * 3.5) + (B * 7.5)) /11;
    Console.WriteLine($"MEDIA = {MEDIA:F5}");

    }

}