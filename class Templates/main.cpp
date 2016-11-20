#include<iostream>
class OptionalInt
{
	int mValue;
	bool mHasValue;
public:
	OptionalInt() : mHasValue(false){ }
	OptionalInt(int v) : mValue(v), mHasValue(true){ }
	void set(int v)
	{
		mValue = v;
		mHasValue = true;
	}
	void clear()
	{
		mHasValue = false;
	}
	int get() const
	{
		if (!mHasValue){
			std::cerr << "Vorsicht! Leere Variable ausgelesen! \n";
		}
		return mValue;
	}
	bool hasValue() const
	{
		return mHasValue;
	}
};
int main()
{
	OptionalInt o;
	std::cout << "Hat o im Moment einen Wert?" << o.hasValue() << "\n";
	o.set(10);
	std::cout << "Hat o im Moment einen Wert?" << o.hasValue() << "\n";
	std::cout << "o = " << o.get() << "\n";
	o.clear();
	std::cout << "Hat o im Moment einen Wert?" << o.hasValue() << "\n";
	std::cin.get();
}