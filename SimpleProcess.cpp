#include<iostream>
using namespace std;

class SimpleProcess
 {
    int id;
    ManagementData md;
    int Max[];
    int Allocation[];
    int Need [];
    bool finish;
    animationFrame anim;
    status stat;

    private: void initialSet()
    {
        for(int i=0; i < (sizeof(Max)/sizeof(*Max)); i++)
        {
           Need[i] = Max[i] - Allocation[i];
        }
        md.initialResource(Allocation);
    }
    public:
    SimpleProcess(int i, ManagementData m, int[] ma, int[] a,animationFrame ani, status st)
    {
        id = i;
        md = m;
        Max = ma;
        Allocation = a;
        anim = ani;
        stat = st;
        Need = new int [4];
        finish = false;
        md.setSimpleProcess(i, this);
        initialSet();
    }
    void successAllocation(int request[])
    {
        for (int j=0; j<4;j++)
        {
            Allocation[j] = Allocation[j] + request[j];
            Need[j] = Need[j] - request[j];
        }
    }
    void failAllocation(int request[])
    {
        for (int j=0; j<4;j++)
        {
            Allocation[j] = Allocation[j] - request[j];
            Need[j] = Need[j] + request[j];
        }
    }
    void Finish()
    {
        bool checkEnd = true;
        for (int i=0;i<4;i++)
        {
           if (Need[i] != 0)
           {
               checkEnd = false;
           }
        }

        if (checkEnd)
        {
            md.release(Allocation);
//            anim.prtFinish(id);
            for (int i=0;i<4;i++)
                Allocation[i] = 0;
            finish = true;

            cout<<"******** Release ********";
            cout<<"Release process" + id;
            cout<<"Process " + char(id) + " finished... Process "+char(id)+" release all resources it is currently holding";
            cout<<"* State *";
            md.printAvailable();
            md.printNeed();
            md.printAllocation();
            anim.repaint();
        }
    }

    int[] returnNeed()
    {
        return Need;
    }

    int[] returnAllocation()
    {
        return Allocation;
    }

    bool returnFinish()
    {
        return finish;
    }
    void printNeedSet()
    {
        cout<<"Process " + id + " Need: ";
        for(int i=0; i < (sizeof(Max)/sizeof(*Max)); i++)
        {
           cout<<Need[i] + " ";
        }
        cout<<"\n";
    }
 };
