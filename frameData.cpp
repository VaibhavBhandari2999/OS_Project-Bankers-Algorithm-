#include<iostream>
using namespace std;
class frameData
{
    int  m00, m01, m02, m03, a00, a01, a02, a03,
             v0, v1, v2, v3, r0, r1, r2, r3,
	     m10, m11, m12, m13, a10, a11, a12, a13,
	     m20, m21, m22, m23, a20, a21, a22, a23,
	     m30, m31, m32, m33, a30, a31, a32, a33,
	     m40, m41, m42, m43, a40, a41, a42, a43;

	int proc;
        int speed;

public:
    frameData(int  z01, int z02, int z03, int z04, int z11, int z12,
          int z13, int z14, int z21, int z22, int z23, int z24, int z31,
          int z32, int z33, int z34, int z41, int z42, int z43, int z44,
          int z51, int z52, int z53, int z54, int z61, int z62, int z63,
          int z64, int z71, int z72, int z73, int z74, int z81, int z82,
          int z83, int z84, int z91, int z92, int z93, int z94, int za1,
          int za2, int za3, int za4, int zb1, int zb2, int zb3,	int zb4,
          string process, string spd)
          {
              m00 = z01; m01 = z02; m02 = z03; m03 = z04;
		a00 = z11; a01 = z12; a02 = z13; a03 = z14;
		v0 = z21; v1 = z22; v2 = z23; v3 = z24;
		r0 = z31; r1 = z32; r2 = z33; r3 = z34;
		m10 = z41; m11 = z42; m12 = z43; m13 = z44;
		a10 = z51; a11 = z52; a12 = z53; a13 = z54;
		m20 = z61; m21 = z62; m22 = z63; m23 = z64;
		a20 = z71; a21 = z72; a22 = z73; a23 = z74;
		m30 = z81; m31 = z82; m32 = z83; m33 = z84;
		a30 = z91; a31 = z92; a32 = z93; a33 = z94;
		m40 = za1; m41 = za2; m42 = za3; m43 = za4;
		a40 = zb1; a41 = zb2; a42 = zb3; a43 = zb4;

		if (process == "Process 0")
			proc = 0;
		else if (process == "Process 1")
			proc = 1;
		else if (process == "Process 2")
			proc = 2;
		else if (process == "Process 3")
			proc = 3;
		else proc = 4;

                if (spd == "Slowest")
                        speed = 81;
                else if (spd == "Slower")
                        speed =27;
                else if (spd == "Medium")
                        speed = 9;
                else if (spd == "Faster")
                        speed = 3;
                else speed = 1;
          }
    public:
    int getR0() {return r0;}
	int getR1() {return r1;}
	int getR2() {return r2;}
	int getR3() {return r3;}
	int getV0() {return v0;}
	int getV1() {return v1;}
	int getV2() {return v2;}
	int getV3() {return v3;}
	int getM00() {return m00;}
	int getM01() {return m01;}
	int getM02() {return m02;}
	int getM03() {return m03;}
	int getM10() {return m10;}
	int getM11() {return m11;}
	int getM12() {return m12;}
	int getM13() {return m13;}
	int getM20() {return m20;}
	int getM21() {return m21;}
	int getM22() {return m22;}
	int getM23() {return m23;}
	int getM30() {return m30;}
	int getM31() {return m31;}
	int getM32() {return m32;}
	int getM33() {return m33;}
	int getM40() {return m40;}
	int getM41() {return m41;}
	int getM42() {return m42;}
	int getM43() {return m43;}
	int getA00() {return a00;}
	int getA01() {return a01;}
	int getA02() {return a02;}
	int getA03() {return a03;}
	int getA10() {return a10;}
	int getA11() {return a11;}
	int getA12() {return a12;}
	int getA13() {return a13;}
	int getA20() {return a20;}
	int getA21() {return a21;}
	int getA22() {return a22;}
	int getA23() {return a23;}
	int getA30() {return a30;}
	int getA31() {return a31;}
	int getA32() {return a32;}
	int getA33() {return a33;}
	int getA40() {return a40;}
	int getA41() {return a41;}
	int getA42() {return a42;}
	int getA43() {return a43;}

	int getProcess() {return proc;}
    int getSpeed() {return speed;}
};
