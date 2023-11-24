// Generated by Haxe 4.3.1
#ifndef INCLUDED_Entry
#define INCLUDED_Entry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Entry)



class HXCPP_CLASS_ATTRIBUTES Entry_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Entry_obj OBJ_;
		Entry_obj();

	public:
		enum { _hx_ClassId = 0x4face5ca };

		void __construct(::String inName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Entry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Entry"); }
		static ::hx::ObjectPtr< Entry_obj > __new(::String inName);
		static ::hx::ObjectPtr< Entry_obj > __alloc(::hx::Ctx *_hx_ctx,::String inName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Entry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Entry",52,e8,b3,03); }

		static ::String timeString(Float t);
		static ::Dynamic timeString_dyn();

		::String name;
		Float entry;
		Float total;
		bool running;
		::Array< ::Dynamic> children;
		 ::Entry current;
		void start();
		::Dynamic start_dyn();

		void stop();
		::Dynamic stop_dyn();

		 ::Entry find(::String inName);
		::Dynamic find_dyn();

		void dump(::String indent);
		::Dynamic dump_dyn();

};


#endif /* INCLUDED_Entry */ 
