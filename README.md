# CMakeTutorial

This demonstartes what to do if the lib we want to consume has multiple **.so** files.
Here all the cpp files are present in their separate directories and each one only uses only one of the **.so** file. SO it make sense to include the lib in their separate CMakeLists