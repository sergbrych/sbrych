#ifndef __TEMP__H__
#define __TEMP__H__

#include <boost/noncopyable.hpp>
#include <boost/cstdint.hpp>
#include <string>


namespace test
{
	class my_data:virtual protected boost::noncopyable
	{
		std::string sur_name;
		std::string name;
		my_data(){};
		public:
		my_data(const std::string &s,const std::string &n ):sur_name(s), name(n)
		{

		}
		void SetSurName(const std::string &value)	
		{
			sur_name =value;
		}
		void SetName(const std::string &value)	
		{
			name =value;
		}

		std::string GetSurName() const
		{
			return sur_name;
		}
		std::string GetName() const
		{
			return name;
		}
		~my_data();

	
	};

}


#endif __TEMP__H__