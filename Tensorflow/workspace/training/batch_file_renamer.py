# Python 3 code to rename multiple
# files in a directory or folder
 
# importing os module
import os
 
# Function to rename multiple files
def main():
   
    folder = r"D:\Object_Detection\Tensorflow\workspace\training\Datasets 2.0\Batch 5"
    for count, filename in enumerate(os.listdir(folder)):
        dst = f"Image5 {str(count)}.jpg"
        src =f"{folder}/{filename}"  # foldername/filename, if .py file is outside folder
        dst =f"{folder}/{dst}"
         
        # rename() function will
        # rename all the files
        os.rename(src, dst)
 
# Driver Code
if __name__ == '__main__':
     
    # Calling main() function
    main()