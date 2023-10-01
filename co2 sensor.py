import random # Add this line to import the random module

def measure_co2_level():

return random,radint(300,1200)

def determine_composting_stage (co2_level):

  if co2_level < 500:

     return "Early Stage (Low Microbial Activity)"

 elif 500 <= co2_level < 1000:

    return "Mid-Stage (Increasing Activity)"

 else:

   return "Advanced Stage (High Microbial Activity)"


 def main():

for_in range(10): 


co2_level = measure_co2_level()

composting stage = determine_composting_stage(co2_level)

print (f"C02 Level: {co2_level} ppm")

print (f"Composting Stage: {composting_stage}\n")

 if name  == "main": # Fix the indentation and underscores here
   main()