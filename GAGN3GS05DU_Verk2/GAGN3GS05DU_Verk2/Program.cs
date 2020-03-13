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
            
            string orgpath = @"C:\csv.csv";
            string inputLine = "";
            List<List<string>> data = new List<List<string>>();

            StreamReader reader = new StreamReader(orgpath);

            int count = 0;

            string jsonPath = @".\jsonOut.json";
            if (!File.Exists(jsonPath))
            {
                using (StreamWriter sw = File.CreateText(jsonPath))
                {
                }
            }

            while ((inputLine = reader.ReadLine()) != null)
            {
                if (inputLine.Length > 0)
                {
                    string[] inputArray = Regex.Split(inputLine, "\\,(?=([^\"]* \"[^\"]*\")*[^\"]*$)");
                    foreach (string item in inputArray)
                    {
                        if (!Regex.IsMatch(item, "\\,(?!=([^\"]* \"[^\"]*\")*[^\"]*$)"))
                        {

                            using (StreamWriter sw = File.AppendText(jsonPath))
                            {
                                sw.WriteLine(item);
                            }
                        }
                    }
                    count++;
                }
            }
            


            


            

        }
    }
}
