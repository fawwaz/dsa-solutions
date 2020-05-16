

find ./** -type d -name "*.dSYM" -exec rm -r {} +

for SUBFOLDER in codeforces geeksforgeeks leetcode
do
  echo "--Cleaning $SUBFOLDER"
  find ./$SUBFOLDER -type f ! -name "*.cpp" ! -name "*.js" ! -name "*.py" -exec rm -r {} +
done