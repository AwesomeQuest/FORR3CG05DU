using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.IO;
using MongoDB.Driver;
using MongoDB.Bson;
using CsvHelper;
using System.Globalization;

namespace GAGN3GS05DU_Verk2
{
    public class Municipality
    {
        public string municNum { get; set; }
        public string municName { get; set; }
        public int municPop18 { get; set; }
        public int municPop19 { get; set; }
        public int municPop20 { get; set; }
        public int municIncPop { get; set; }
        public string municIncPopPerc { get; set; }
    }

    class Program
    {
        static void Main(string[] args)
        {
            /*
            string orgpath = @"C:\csv.csv";
            string inputLine = "";
            List<List<string>> data = new List<List<string>>();

            StreamReader reader = new StreamReader(orgpath);

            int count = 0;

            while ((inputLine = reader.ReadLine()) != null)
            {
                if (inputLine.Length > 0)
                {
                    string[] inputArray = Regex.Split(inputLine, "\\,(?=([^\"]* \"[^\"]*\")*[^\"]*$)");
                    foreach (string item in inputArray)
                    {
                        Console.Write(item + " ");
                    }
                    Console.WriteLine();
                    count++;
                }
            }
            */

            MongoClient dbClient = new MongoClient("mongodb://localhost:27017");
            var database = dbClient.GetDatabase("Municipality Population");
            var collection = database.GetCollection<BsonDocument>("Municipalities");

            using (var reader = new StreamReader(@"C:\csv.csv"))
            using (var csv = new CsvReader(reader, CultureInfo.InvariantCulture))
            {
                var records = csv.GetRecords<Municipality>();
            }


            

        }
    }
}
