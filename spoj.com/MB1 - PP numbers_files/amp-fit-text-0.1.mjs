(self.AMP=self.AMP||[]).push({n:"amp-fit-text",ev:"0.1",l:true,v:"2106212012000",m:1,f:function(AMP,_){function h(a){let b=parseFloat(a);return"number"===typeof b&&isFinite(b)?b:void 0}let k;let m="Webkit webkit Moz moz ms O o".split(" ");function n(a,b,c){var f=a.style;if(!b.startsWith("--")){k||(k=Object.create(null));var d=k[b];if(!d){d=b;if(void 0===f[b]){var e=b.charAt(0).toUpperCase()+b.slice(1);b:{for(let g=0;g<m.length;g++){let l=m[g]+e;if(void 0!==f[l]){e=l;break b}}e=""}void 0!==f[e]&&(d=e)}k[b]=d}b=d}b&&(b.startsWith("--")?a.style.setProperty(b,c):a.style[b]=c)}function p(a,b){for(let c in b)n(a,c,b[c])}
/* https://mths.be/cssescape v1.5.1 by @mathias | MIT license */
function q(a,b){let c=[];for(a=a.firstChild;a;a=a.nextSibling)b(a)&&c.push(a);return c}function r(a){return q(a,(b=>{{let c;"string"==typeof b?c=b:b.nodeType===Node.ELEMENT_NODE&&(c=b.tagName);b=c&&c.toLowerCase().startsWith("i-")?!0:b.nodeType!==Node.ELEMENT_NODE?!1:b.hasAttribute("placeholder")||b.hasAttribute("fallback")||b.hasAttribute("overflow")}return!b}))}function t(a,b){function c(g){e=null;d=a.setTimeout(f,100);b.apply(null,g)}function f(){d=0;e&&c(e)}let d=0,e=null;return function(...g){d?e=g:c(g)}}function u(a){let b=a.j.offsetHeight;var c=a.o;var f=a.j.offsetWidth;var d=a.C,e=a.B;for(e++;1<e-d;){let g=Math.floor((d+e)/2);n(c,"fontSize",`${g}px`);let l=c.offsetWidth;c.offsetHeight>b||l>f?e=g:d=g}f=d;n(a.h,"fontSize",`${f}px`);c=a.h;a=a.o;n(a,"fontSize",`${f}px`);a=a.offsetHeight>b;f*=1.15;d=Math.floor(b/f);c.classList.toggle("i-amphtml-fit-text-content-overflown",a);p(c,{lineClamp:a?d:"",maxHeight:a?`${f*d}px`:""})}class v extends AMP.BaseElement{static prerenderAllowed(){return!0}constructor(a){super(a);this.o=this.h=this.j=null;this.B=this.C=-1;this.A=null;this.D=""}isLayoutSupported(a){return"fixed"==a||"fixed-height"==a||"responsive"==a||"fill"==a||"flex-item"==a||"fluid"==a||"intrinsic"==a}buildCallback(){this.j=this.element.ownerDocument.createElement("div");this.j.classList.add("i-amphtml-fill-content");this.j.classList.add("i-amphtml-fit-text-content");p(this.j,{zIndex:2});this.h=this.element.ownerDocument.createElement("div");p(this.h,{lineHeight:"1.15em"});this.j.appendChild(this.h);this.o=this.element.ownerDocument.createElement("div");p(this.o,{position:"absolute",top:0,left:0,zIndex:1,visibility:"hidden",lineHeight:"1.15em"});r(this.element).forEach((a=>{this.h.appendChild(a)}));this.o.innerHTML=this.h.innerHTML;this.element.appendChild(this.j);this.element.appendChild(this.o);this.C=h(this.element.getAttribute("min-font-size"))||6;this.B=h(this.element.getAttribute("max-font-size"))||72;Object.defineProperty(this.element,"textContent",{set:a=>{this.D=a;this.mutateElement((()=>{this.h.textContent=a;this.o.innerHTML=this.h.innerHTML;u(this)}))},get:()=>this.D||this.h.textContent})}isRelayoutNeeded(){return!0}layoutCallback(){if(this.win.ResizeObserver&&null===this.A){let a=new this.win.ResizeObserver(t(this.win,(()=>this.mutateElement((()=>{this.o.innerHTML=this.h.innerHTML;u(this)})))));a.observe(this.j);a.observe(this.o);this.A=function(){a.disconnect()}}return this.mutateElement((()=>{u(this)}))}unlayoutCallback(){null!==this.A&&(this.A(),this.A=null)}}(a=>{a.registerElement("amp-fit-text",v,".i-amphtml-fit-text-content,.i-amphtml-fit-text-content.i-amphtml-fill-content{display:block;display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column;-ms-flex-wrap:nowrap;flex-wrap:nowrap;-ms-flex-pack:center;justify-content:center}.i-amphtml-fit-text-content-overflown{display:block;display:-webkit-box;-webkit-box-orient:vertical;overflow:hidden}\n/*# sourceURL=/extensions/amp-fit-text/0.1/amp-fit-text.css*/")})(self.AMP)}});//# sourceMappingURL=amp-fit-text-0.1.mjs.map