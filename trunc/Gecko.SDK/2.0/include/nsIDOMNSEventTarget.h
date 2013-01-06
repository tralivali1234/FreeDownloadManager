/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-cen-xr-w32-bld/build/dom/interfaces/events/nsIDOMNSEventTarget.idl
 */

#ifndef __gen_nsIDOMNSEventTarget_h__
#define __gen_nsIDOMNSEventTarget_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMNSEventTarget */
#define NS_IDOMNSEVENTTARGET_IID_STR "c8b658d5-d583-472a-a7ec-cbc2e79f75dd"

#define NS_IDOMNSEVENTTARGET_IID \
  {0xc8b658d5, 0xd583, 0x472a, \
    { 0xa7, 0xec, 0xcb, 0xc2, 0xe7, 0x9f, 0x75, 0xdd }}

/**
 * The nsIDOMNSEventTarget interface is an extension to the standard
 * nsIDOMEventTarget interface, implemented by all event targets in
 * the Document Object Model.
 */
class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMNSEventTarget : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNSEVENTTARGET_IID)

  /**
   * This method is the same as the addEventListener() method defined
   * in nsIDOMEventTarget, but it takes one additional argument which
   * lets callers control whether or not they want to receive
   * untrusted events (synthetic events generated by untrusted code)
   *
   * @param   type See the type argument to the same method in
   *               nsIDOMEventTarget.
   * @param   listener See the listener argument to the same method in
   *                   nsIDOMEventTarget.
   * @param   useCapture See the listener argument to the same method in
   *                     nsIDOMEventTarget.
   * @param   wantsUntrusted If false, the listener will not receive any
   *                         untrusted events (see above), if true, the
   *                         listener will receive events whether or not
   *                         they're trusted
   */
  /* [optional_argc] void addEventListener (in DOMString type, in nsIDOMEventListener listener, in boolean useCapture, [optional] in boolean wantsUntrusted); */
  NS_SCRIPTABLE NS_IMETHOD AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc) = 0;

  /**
   * The default script type (language) for events firing on this target.
   * Must be one of the nsIProgrammingLanguage enums, but must not be
   * nsIProgrammingLanguage::UNKNOWN.  Most implementations will provide
   * a default type of nsIProgrammingLanguage::JAVASCRIPT.
   *
   * All targets must support fetching the script language, but not all
   * script targets must support changing it - ie, some targets may only
   * support event handlers written in their default language.
   */
  /* [noscript] attribute PRUint32 scriptTypeID; */
  NS_IMETHOD GetScriptTypeID(PRUint32 *aScriptTypeID) = 0;
  NS_IMETHOD SetScriptTypeID(PRUint32 aScriptTypeID) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNSEventTarget, NS_IDOMNSEVENTTARGET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNSEVENTTARGET \
  NS_SCRIPTABLE NS_IMETHOD AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc); \
  NS_IMETHOD GetScriptTypeID(PRUint32 *aScriptTypeID); \
  NS_IMETHOD SetScriptTypeID(PRUint32 aScriptTypeID); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNSEVENTTARGET(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc) { return _to AddEventListener(type, listener, useCapture, wantsUntrusted, _argc); } \
  NS_IMETHOD GetScriptTypeID(PRUint32 *aScriptTypeID) { return _to GetScriptTypeID(aScriptTypeID); } \
  NS_IMETHOD SetScriptTypeID(PRUint32 aScriptTypeID) { return _to SetScriptTypeID(aScriptTypeID); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNSEVENTTARGET(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddEventListener(type, listener, useCapture, wantsUntrusted, _argc); } \
  NS_IMETHOD GetScriptTypeID(PRUint32 *aScriptTypeID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScriptTypeID(aScriptTypeID); } \
  NS_IMETHOD SetScriptTypeID(PRUint32 aScriptTypeID) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScriptTypeID(aScriptTypeID); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNSEventTarget : public nsIDOMNSEventTarget
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNSEVENTTARGET

  nsDOMNSEventTarget();

private:
  ~nsDOMNSEventTarget();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMNSEventTarget, nsIDOMNSEventTarget)

nsDOMNSEventTarget::nsDOMNSEventTarget()
{
  /* member initializers and constructor code */
}

nsDOMNSEventTarget::~nsDOMNSEventTarget()
{
  /* destructor code */
}

/* [optional_argc] void addEventListener (in DOMString type, in nsIDOMEventListener listener, in boolean useCapture, [optional] in boolean wantsUntrusted); */
NS_IMETHODIMP nsDOMNSEventTarget::AddEventListener(const nsAString & type, nsIDOMEventListener *listener, PRBool useCapture, PRBool wantsUntrusted, PRUint8 _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute PRUint32 scriptTypeID; */
NS_IMETHODIMP nsDOMNSEventTarget::GetScriptTypeID(PRUint32 *aScriptTypeID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMNSEventTarget::SetScriptTypeID(PRUint32 aScriptTypeID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNSEventTarget_h__ */
