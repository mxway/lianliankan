void init();

void init_GridData();

int generateRandNum(int lower,int upper);

void setGridData(int &data);

int bfsSearch(int sx,int sy,int ex,int ey);

bool check(int x,int y);

int ExistsPattern(int &sx, int &sy, int &ex, int &ey);

int getConnectNode(int sx,int sy,int &ex,int &ey);

int reArrange();
