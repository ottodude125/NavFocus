file(READ "${SRC}" OUTPUT_LINES)
string(REGEX REPLACE "vehicleprofile" "atkaction" OUTPUT_LINES "${OUTPUT_LINES}")
string(REGEX REPLACE "name=" "description=" OUTPUT_LINES "${OUTPUT_LINES}")
string(REGEX REPLACE "...CDATA" " " OUTPUT_LINES "${OUTPUT_LINES}")
string(REGEX REPLACE "\\]\\]" "" OUTPUT_LINES "${OUTPUT_LINES}")
file(WRITE ${DST} ${OUTPUT_LINES})
