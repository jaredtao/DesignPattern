FILE(GLOB_RECURSE newList *.h)
set(dirList "")
foreach(arg ${newList})
    get_filename_component(dirPath ${arg} PATH)
    get_filename_component(folderName ${dirPath} NAME)
    set(dirList ${dirList} ${folderName})
endforeach()
LIST(REMOVE_DUPLICATES dirList)
foreach(subDir ${dirList})
    add_subdirectory(${subDir})
endforeach()



