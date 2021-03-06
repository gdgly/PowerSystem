// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CrdoEnvironments;
class CrdoErrors;
class C_rdoEnvironment;

/////////////////////////////////////////////////////////////////////////////
// C_rdoEngine wrapper class

class C_rdoEngine : public COleDispatchDriver
{
public:
	C_rdoEngine() {}		// Calls COleDispatchDriver default constructor
	C_rdoEngine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	C_rdoEngine(const C_rdoEngine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetRdoDefaultLoginTimeout();
	void SetRdoDefaultLoginTimeout(long nNewValue);
	CString GetRdoDefaultUser();
	void SetRdoDefaultUser(LPCTSTR lpszNewValue);
	CString GetRdoDefaultPassword();
	void SetRdoDefaultPassword(LPCTSTR lpszNewValue);
	CrdoEnvironments GetRdoEnvironments();
	CrdoErrors GetRdoErrors();
	CString GetRdoVersion();
	long GetRdoDefaultCursorDriver();
	void SetRdoDefaultCursorDriver(long nNewValue);
	long GetRdoDefaultErrorThreshold();
	void SetRdoDefaultErrorThreshold(long nNewValue);
	void rdoRegisterDataSource(LPCTSTR DSN, LPCTSTR Driver, BOOL Silent, LPCTSTR Attributes);
	C_rdoEnvironment rdoCreateEnvironment(LPCTSTR Name, LPCTSTR User, LPCTSTR Password);
	long GetRdoLocaleID();
	void SetRdoLocaleID(long nNewValue);
};
