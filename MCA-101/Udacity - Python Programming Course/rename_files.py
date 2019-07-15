import os

#Sample file for renaming can be downloaded from here : https://s3.amazonaws.com/udacity-hosted-downloads/ud036/prank.zip

#Specify the address of the directory that you want to access
directory = r"C:\Users\bohet\Documents\GitHub\Python\Udacity - Python Programming Course\prank"

#create a translation table which is a parameter to .translate function, this table is used to remove specific characters from a string
translation_table = str.maketrans("0123456789", "          ", "0123456789")

def rename_files():
    '''
    Objective : To rename files in directory, removing specified characters from the name. In this case 0,1,2,3,4,5,6,7,8,9.
    Input Variables : None
    Output : The files would be renamed.
    '''
    os.chdir(directory)
    
    # (1) Get file names from a directory    
    file_list = os.listdir(directory)
    print(file_list)

    # (2) Rename files
    for file_name in file_list:
        print("Old file Name - ", file_name)
        print("New file Name - ", file_name.translate(translation_table))
        os.rename(file_name,file_name.translate(translation_table))

rename_files()
    
